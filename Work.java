import java.util.Scanner;

public class Work {
    
    static int myabs(int a)
    {
        return a > 0 ? a : a * -1;
    }

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int Max = in.nextInt();
        int carry = 1;
        int num;
        if(Max<0) {
            carry=-1;
            Max*=-1;
        }
        for(int i = 1 ; i < n ; i++) {
            num = in.nextInt();
            if(Max < myabs(num)) {
                Max = myabs(num);
                carry = num/Max;
            }
        }
        System.out.print(Max*carry);
        in.close();
    }
}