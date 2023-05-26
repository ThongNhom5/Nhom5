
import java.util.ArrayList;
import java.util.Scanner;

public class dictionary {

    public static void main(String[] args) {
        ArrayList<word> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int n;
        do {

            System.out.println("1.Nhap so word vao danh sach");
            System.out.println("2.Tim kiem");
            n = sc.nextInt();
            switch (n) {
                case 1:
                    int x;
                    System.out.println("nhap so word muon them");
                    x = sc.nextInt();
                    for (int i = 0; i < x; i++) {
                        word w = new word(0, null, null);

                        w.input();
                        list.add(w);
                    }

                    break;
                case 2:
                    sc.nextLine();
                    String tim;
                    System.out.println("nhap tu can tim kiem ");
                    tim = sc.nextLine();
                    int check = 0;
                    for (word ww : list) {

                        if (ww.getVn().equalsIgnoreCase(tim)) {
                            check = 1;
                            System.out.println(ww);

                        }
                    }
                    if (check == 0)
                        System.out.println("khong ton tai : yeu cau them vao du lieu");
                    System.out.println("nhap id");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.println("nhap tieng anh");
                    String ta = sc.nextLine();
                    word w1 = new word(id, ta, tim);
                    if (list.add(w1) == true) {
                        System.out.println("them thanh cong");
                    }

                    break;
            }

        } while (n != 0);
    }
}