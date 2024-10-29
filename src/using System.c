using System;
class Program
{
 static void Main()
 {
 // Prompt the user for the length and width of the rectangle
 Console.Write("Enter the length of the rectangle: ");
 double length = Convert.ToDouble(Console.ReadLine());
 Console.Write("Enter the width of the rectangle: ");
 double width = Convert.ToDouble(Console.ReadLine());
 // Calculate the area
 double area = CalculateArea(length, width);
 // Display the result
 Console.WriteLine($"The area of the rectangle is: {area}");
 }
 static double CalculateArea(double length, double width)
 {
 return length * width;
 }
}