import java.util.Scanner;
public class circlecircumference{
    public static void main(String[] args){
        System.out.println("This simple Java program will be for calculating the circumference of a circle");
        Scanner scanner = new Scanner(System.in);
        double r;
        double circ;
        System.out.print("Please enter the radius: ");
        r = scanner.nextDouble();
        circ = Math.ceil(2 * Math.PI * r);
        System.out.println("The circumference of the circle is: " + circ + "m");
        scanner.close();
    }
}