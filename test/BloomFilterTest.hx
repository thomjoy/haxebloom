package;

import massive.munit.Assert;
import massive.munit.async.AsyncFactory;

import BloomFilter;

class BloomFilterTest
{
	public function new() 
	{
		trace('BloomFilterTest.new');
	}
	
	@Test
	public function testCreation():Void
	{
		var intBloom = new BloomFilter(32, 4);
		Assert.isNotNull(intBloom);

		var arrBloom = new BloomFilter(['one', 'two', 'three'], 4);
		Assert.isNotNull(arrBloom);
	}

	@Test
	public function testAdd():Void
	{
		var intBloom = new BloomFilter(32, 4);

		intBloom.add('Thom');
		Assert.isTrue(intBloom.has('Thom'));

		intBloom.add('Tim');
		Assert.isTrue(intBloom.has('Tim'));

		Assert.isFalse(intBloom.has('Garth'));
	}
}