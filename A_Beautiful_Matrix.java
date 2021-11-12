import java.util.*;
public class A_Beautiful_Matrix {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args){
        int[][] arr = new int[5][5];
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j] = input.nextInt();
            }
        }
        int rows =0;
        int colmuns = 0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(arr[i][j]==1){
                    rows = i;
                    colmuns = j;
                    break;
                }
            }
        }
        int result =0;
        if(rows<=2){
            result += (2-rows);
        }
        else{
            result += (rows-2);
        }
        if(colmuns<=2){
            result += (2-colmuns);
        }
        else{
            result += (colmuns-2);
        }
        System.out.println(result);
    }
}
