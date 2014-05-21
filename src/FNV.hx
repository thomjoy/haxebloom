// Computationally fast hashing functions
// http://isthe.com/chongo/tech/comp/fnv/

class FNV
{
  public static function fnv_1a(s:String)
  {
    var n:Int = s.length;
    var a:Dynamic = 2166136261;
    var c:Dynamic;
    var d:Dynamic;
    var i = -1;

    while( ++i < n )
    {
      c = s.charCodeAt(i);

      if( (d = c & 0xff000000) != 0)
      {
        a = Std.int(a) ^ (Std.int(d) >> 24);
        a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
      }

      if( (d = c & 0xff0000 ) != 0)
      {
        a = Std.int(a) ^ (Std.int(d) >> 16);
        a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
      }

      if( (d = c & 0xff00) != 0)
      {
        a = Std.int(a) ^ (Std.int(d) >> 8);
        a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
      }

      a = Std.int(a) ^ Std.int(c & 0xff);
      a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
    }

    // From http://home.comcast.net/~bretm/hash/6.html
    a += a << 13;
    a =  Std.int(a) ^ Std.int(a) >> 7;
    a += a << 3;
    a =  Std.int(a) ^ Std.int(a) >> 17;
    a += a << 5;
    return a & 0xffffffff;
  }

  public static function fnv_1a_b(a)
  {
    a += (a << 1) + (a << 4) + (a << 7) + (a << 8) + (a << 24);
    a += a << 13;
    a = Std.int(a) ^ Std.int(a) >> 7;
    a += a << 3;
    a = Std.int(a) ^ Std.int(a) >> 17;
    a += a << 5;
    return a & 0xffffffff;
  }
}
