import java.util.ArrayList;
import java.util.Scanner;

public class word {
    private int id;
    private String en;
    private String vn;

    public word(int id, String en, String vn) {
        this.id = id;
        this.en = en;
        this.vn = vn;
    }

    public word() {
    }

    @Override
    public String toString() {
        return "word [id=" + id + ", en=" + en + ", vn=" + vn + "]";
    }

    public int getId() {
        return id;
    }

    public String getEn() {
        return en;
    }

    public String getVn() {
        return vn;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setEn(String en) {
        this.en = en;
    }

    public void setVn(String vn) {
        this.vn = vn;
    };

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap Id:");
        id = sc.nextInt();
        sc.nextLine();
        System.out.println("nhap Tu English:");
        en = sc.nextLine();
        System.out.println("nhap tieng viet");
        vn = sc.nextLine();

    }

    public int timkiemnhiphan(ArrayList l, int left, int right, String t) {
        int mid = (left + right) / 2;
        while (left < right) {
            if (l.get(mid) == t)
                return mid;

            if (l.get(mid))
                left = mid + 1;

        }

        return -1;

    }

}
