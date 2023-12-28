import java.util.*;

class Assignment_No32_Task2 {
    public static int SamllCapital(String str) {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for (i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= 'a') && (Arr[i] <= 'z')) {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter Your String : ");
        str = sobj.nextLine();

        int iRet = 0;
        iRet = SamllCapital(str);
        System.out.println("Samll Characters in The String is : " + iRet);

        sobj.close();
    }
}