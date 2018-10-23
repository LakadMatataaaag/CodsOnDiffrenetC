using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TestProgram;

namespace TestProgram
{
    class Car
    {
        public string name;
        public string mark;
        public string size;
        public string classk;
        public Car (string name, string mark, string size, string classk)
        {
            this.name = name;
            this.mark = mark;
            this.size = size;
            this.classk = classk;
            Console.WriteLine("Название машины  - " + name);
            Console.WriteLine("Марка машины - " + mark);
            Console.WriteLine("Размер шины - R" + size);
            Console.WriteLine("Класс автомобиля - " + classk);
            Console.WriteLine();
        }
    }
}
