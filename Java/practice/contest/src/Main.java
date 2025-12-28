import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i< t;i++){
            int n =sc.nextInt();
            int []arr = new int[n];
            for(int j = 0; j < n;j++){
                arr[j] =sc.nextInt();
            }
            Arrays.sort(arr);
            long sum = 0;
            if(n % 2  !=  0){
                sum = arr[0];
                for(int j =1; j < n; j+=2){
                    sum += Math.max(arr[j], arr[j+1]);
                }
                System.out.println(sum);
            }
            else {
                for (int j = 0; j < n; j += 2) {
                    sum += Math.max(arr[j], arr[j + 1]);
                }
                System.out.println(sum);
            }

        }
    }
}