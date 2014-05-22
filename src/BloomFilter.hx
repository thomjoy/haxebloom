package;

import FNV;

class BloomFilter
{
	var m:Dynamic;
	var k:Dynamic;
	var _locations = [];
	var buckets = [];

	public function new(m:Dynamic, k:Int)
	{
		var i = -1;

		this.k = k;
		this.m = m;

		if( Std.is(m, Array) )
		{
			var n = Std.int( m.length * 32 );
			while( ++i < n )
			{
				this.buckets[i] = m[i];
			}
		}

		if( Std.is(m, Int) )
		{
			var n = Math.ceil( m / 32 );
			while( ++i < n )
			{
				this.buckets[i] = 0;
			}
		}
	}

	public function locations(v)
	{
		var k = this.k;
        var m = this.m;
        var r = this._locations;
        var a = FNV.fnv_1a(v);
        var b = FNV.fnv_1a_b(a);
        var i = -1;
        var x = Std.int(a) % Std.int(m);

    	while( ++i < k )
    	{
      		r[i] = x < 0 ? Std.int((x + m)) : Std.int(x);
      		x = Std.int(Std.int(x + b)) % Std.int(m);
    	}

    	return r;
	}

	public function add(v)
	{
		var l = this.locations(v);
        var i = -1;
        var k = this.k;
       
    	while( ++i < k )
    	{
    		buckets[Std.int(Math.floor(l[i]) / 32)] |= (1 << (Std.int(l[i]) % 32));
    	}
	}

	public function has(v)
	{
		var l = this.locations(v);
        var i = -1;
        var k = this.k;
        var b;
        
    	while( ++i < k )
    	{
     		b = Std.int(l[i]);
      		if( (buckets[Std.int(Math.floor(b / 32))] & (1 << Std.int((Std.int(b) % 32))) == 0) )
      		{
        		return false;
      		}
    	}
    	
    	return true;
	}

	public static function main()
	{
	}
}