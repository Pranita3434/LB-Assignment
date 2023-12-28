import java.util.*;

class Assignment_No32_Task4 {
    public static boolean ChkVowel(String str) {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for (i = 0; i < Arr.length; i++) {
            if ((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U')
                    || (Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u')) {
                return true;
            }
        }
        return false;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter Your String : ");
        str = sobj.nextLine();

        boolean bRet = false;
        bRet = ChkVowel(str);

        if (bRet == true) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}