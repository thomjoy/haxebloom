(function () { "use strict";
var BloomFilter = function(m,k) {
	this.buckets = [];
	this._locations = [];
	var i = -1;
	var k1 = k;
	var n = Math.ceil(m / 32);
	while(++i < n) this.buckets[i] = 0;
};
BloomFilter.main = function() {
	var bloom = new BloomFilter(32,4);
	bloom.add("Thom");
	console.log(bloom.has("Thom"));
};
BloomFilter.prototype = {
	locations: function(v) {
		var k = this.k;
		var m = this.m;
		var r = this._locations;
		var a = FNV.fnv_1a(v);
		var b = FNV.fnv_1a_b(a);
		var i = -1;
		var x = (a | 0) % (m | 0);
		while(++i < k) {
			if(x < 0) r[i] = x + m | 0; else r[i] = x | 0;
			x = (x + b | 0) % (m | 0);
		}
		return r;
	}
	,add: function(v) {
		var l = this.locations(v);
		var i = -1;
		var k = this.k;
		var buckets = this.buckets;
		while(++i < k) buckets[Math.floor((l[i] | 0) / 32)] |= 1 << (l[i] | 0) % 32;
	}
	,has: function(v) {
		var l = this.locations(v);
		var i = -1;
		var k = this.k;
		var b;
		var buckets = this.buckets;
		while(++i < k) {
			b = l[i] | 0;
			if((buckets[Std["int"](Math.floor(b / 32))] & 1 << ((b | 0) % 32 | 0)) == 0) return false;
		}
		return true;
	}
};
var FNV = function() { };
FNV.fnv_1a = function(s) {
	var n = s.length;
	var a = 2166136261;
	var c;
	var d;
	var i = -1;
	while(++i < n) {
		c = HxOverrides.cca(s,i);
		if((d = c & -16777216) != 0) {
			a = Std["int"](a) ^ Std["int"](d) >> 24;
			a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
		}
		if((d = c & 16711680) != 0) {
			a = Std["int"](a) ^ Std["int"](d) >> 16;
			a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
		}
		if((d = c & 65280) != 0) {
			a = Std["int"](a) ^ Std["int"](d) >> 8;
			a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
		}
		a = Std["int"](a) ^ (c & 255 | 0);
		a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
	}
	a += a << 13;
	a = Std["int"](a) ^ Std["int"](a) >> 7;
	a += a << 3;
	a = Std["int"](a) ^ Std["int"](a) >> 17;
	a += a << 5;
	return a & -1;
};
FNV.fnv_1a_b = function(a) {
	a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
	a += a << 13;
	a = (a | 0) ^ (a | 0) >> 7;
	a += a << 3;
	a = (a | 0) ^ (a | 0) >> 17;
	a += a << 5;
	return a & -1;
};
var HxOverrides = function() { };
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
var Std = function() { };
Std["int"] = function(x) {
	return x | 0;
};
Math.NaN = Number.NaN;
Math.NEGATIVE_INFINITY = Number.NEGATIVE_INFINITY;
Math.POSITIVE_INFINITY = Number.POSITIVE_INFINITY;
Math.isFinite = function(i) {
	return isFinite(i);
};
Math.isNaN = function(i1) {
	return isNaN(i1);
};
BloomFilter.main();
})();

//# sourceMappingURL=bloomfilter.js.map