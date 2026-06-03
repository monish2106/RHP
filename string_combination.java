import java.util.Scanner;

public class Main {

    static void solve() {
        Scanner sc = new Scanner(System.in);

        String s;
        s = sc.next();

        int L = s.length();

        for (int ctr = 1; ctr < (1 << L); ctr++) {
            String combi = "";

            for (int sh = 0; sh < L; sh++) {
                if ((ctr & (1 << sh)) > 0) {
                    combi += s.charAt(sh);
                }
            }

            System.out.println(combi);
        }
    }

    public static void main(String[] args) {
        solve();
    }
}
