using System;

namespace SomeProjectToTest
{
  class Car
  {
    public string Name { get; set;}

    public Car (string name)
    {
      Name = name;
    }
  }
  class BMW : Car
  {
    private float speed;
    public BMW (float speed, string name) : base (name)
    {
      this.speed = speed;
      Console.WriteLine ("Speed - " + speed);
    }
  }

  class MainClass
  {
    public static void Main (string[] args)
    {
      BMW e63 = new BMW (230.34f, "E63");
      Console.WriteLine (e63.Name);

    }
  }
}
