int a, b;
double x;

Console.WriteLine("Calculadora.");

Console.Write("\nDigite o valor de a = ");
a = Convert.ToInt32(Console.ReadLine());

Console.Write("\nDigite o valor de b = ");
b = Convert.ToInt32(Console.ReadLine());

Console.WriteLine("\nValor da soma = " + (a + b));
Console.WriteLine("Valor da subtração = " + (a - b));
Console.WriteLine("Valor da multiplicação = " + (a * b));

x = (double)a / b;

Console.WriteLine("Valor da divisão = " + x.ToString("0.00"));
