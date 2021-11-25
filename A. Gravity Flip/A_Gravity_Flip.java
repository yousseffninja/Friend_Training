import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class A_Gravity_Flip {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();

        int N = input.nextInt();
        for (int i = 0; i < N; i++)
            arr.add(input.nextInt());

        Collections.sort(arr);
        for (int i = 0; i < N; i++)
            System.out.print(arr.get(i) + " ");
    }
}