// Solve 2023-10-19

// 백준에 제출할 때는 class 이름을 Main으로 설정해야 함.

import java.util.Scanner;

public class boj_2739 {
    public static void main(String[] args) {
        Scanner sc;
        int n;

        sc = new Scanner(System.in);
        n = sc.nextInt();

        for (int i = 1; i <= 9; i++) {
            System.out.println(n + " * " + i + " = " + (n * i));
        }

        sc.close();
    }
}
