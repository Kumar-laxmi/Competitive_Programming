import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Set;
import java.lang.*;

class codechef {

    public static void main(String[] args) throws java.lang.Exception {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int c=n;
            Set<Integer> set = new HashSet<Integer>();
            while (c-- > 0) {
                set.add(sc.nextInt());
            }
            if (set.size() <= 12 && n >= 12) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
    }
}
