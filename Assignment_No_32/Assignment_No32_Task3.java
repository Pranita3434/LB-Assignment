import java.util.*;

class Assignment_No32_Task3 {
    public static int CountDiff(String str) {
        int i = 0;
        int CountDiff = 0;
        int iCountCapital = 0;
        int iCountSmall = 0;

        char Arr[] = str.toCharArray();

        for (i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= 'A') && (Arr[i] <= 'Z')) {
                iCountCapital++;
            }
        }

        for (i = 0; i < str.length(); i++) {
            if ((Arr[i] >= 'a') && (Arr[i] <= 'z')) {
                iCountSmall++;
            }
        }
        CountDiff = iCountSmall - iCountCapital;
        return CountDiff;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter Your String : ");
        str = sobj.nextLine();

        int iRet = 0;
        iRet = CountDiff(str);
        System.out.println("Count Diiference in Capital and samll Characters in The String is : " + iRet);

        sobj.close();
    }
}