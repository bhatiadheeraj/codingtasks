import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;
import java.lang.Integer;
import java.lang.*;
public class Main{
    public static void main(String[] args) {
        System.out.print("Hello this is a program by Dheeraj Bhatia"+"\n"+"write a sentence !");
        Scanner in = new Scanner(System.in);
        String s = in.nextLine(); 
        System.out.println("You entered integer "+s);
        System.out.println(s.indexOf("-"));

        // The following code works in order to exempt integer hunk // 
        StringBuilder sb = new StringBuilder(s);
        sb.deleteCharAt(s.indexOf("-")-1);
        sb.deleteCharAt(s.indexOf("-"));
        // System.out.println(sb.toString());

        String ih = sb.toString();

        // The following code gets all the integers from the String // 
        ih = ih.replaceAll("[^0-9]+", " ");

        System.out.println(Arrays.asList(ih.trim().split(" ")));

        List<String> intsList = Arrays.asList(ih.trim().split(" "));

        System.out.print("These are the nos"+intsList);

List<Integer> listIntegers = new ArrayList<Integer>(intsList.size());
for(String current:intsList){
  listIntegers.add(Integer.parseInt(current));
}

        // System.out.print(listIntegers);
// The below code adds 
        int sum = sum(listIntegers);
        System.out.print("The sum is "+sum);

        // The below code adds 

    }

    public static int sum(List<Integer> list) {
    int sum = 0;
    for (int i: list) {
        sum += i;
    }
    return sum;
}
}
