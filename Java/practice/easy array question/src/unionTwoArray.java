
import java.util.ArrayList;
import java.util.List;

class Test{
    public int[] union(int a[],int b[]) {
        List<Integer> result = new ArrayList<>();
        int i = 0;
        int n1 = a.length;
        int n2 = b.length;
        int j = 0;
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (result.size() == 0 || result.get(result.size() - 1) != a[i]) {
                    result.add(a[i]);
                }
                i++;
            }
            else {
                if (result.size() == 0 || result.get(result.size() - 1) != b[j]) {
                        result.add(b[j]);
                }
                j++;
            }

        }
        while (j < n2) {
            if (result.size() == 0 || result.get(result.size() - 1) != b[j]) {
                result.add(b[j]);
            }
            j++;
        }
        while (i < n1) {
            if (result.size() == 0 || result.get(result.size() - 1) != a[i]) {
                result.add(a[i]);
            }
            i++;
        }
        return result;
    }


}

public class unionTwoArray {
    public static void main(String[] args) {
        int a[]={1,1,2,3,4,5};
        int b[]={2,3,4,4,5,6};

        Test u1 = new Test();

        u1.union(a,b);


    }
}
