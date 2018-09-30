import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        System.out.print("Hello this is a isTriangularNumber checker by Dheeraj Bhatia"+"\n"+"Add a no to check whether it is a TriangularNumber or not");
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        System.out.println("You entered integer "+a);
        isTriangularNumber(a);
    }

    public static boolean isTriangularNumber(long num) {
     long calc_num = 8*num+1;
     long t = (long) Math.sqrt(calc_num);
     if (t*t==calc_num) {
                System.out.println("It is a Triangular Number ");
        return true;
     }else {
         
     }
     return false;
}
}