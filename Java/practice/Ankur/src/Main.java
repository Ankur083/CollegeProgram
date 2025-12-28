import java.util.*;
public class Main {
    public static void main(String[] args) {


                Scanner sc = new Scanner(System.in);
                int t = sc.nextInt();
                for(int i = 0; i < t;i++){
                    int n =sc.nextInt();
                    int k =sc.nextInt();

                    int [] arr = new int[n];

                    for(int j = 0;j < n;j++){
                        arr[i] = sc.nextInt();
                    }
                    if(k >= 2){
                        System.out.println("YES");
                        continue;
                    }
                    int flag = 0;
                    for(int m = 1; m < n;k++){
                        if(arr[m] < arr[m-1]){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 1){
                        System.out.println("N0");
                    }
                    else{
                        System.out.println("YES");
                    }
                }
            }
        }
    }
}
