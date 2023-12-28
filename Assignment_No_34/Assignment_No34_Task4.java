import java.util.*;

class Assignment_No34_Task4 {
    public static int Multiply(int iValue) {
        int iMul = 1;

        while (iValue != 0) {
            int iDigit = iValue % 10;
            iValue = iValue / 10;
            if (iDigit == 0) {
                iDigit = 1;
            }
            iMul = iDigit * iMul;
        }
        return iMul;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter The Number : ");
        iNo1 = sobj.nextInt();

        int iRet = 0;
        iRet = Multiply(iNo1);
        System.out.println("Multiplication of all digit is : " + iRet);

        sobj.close();
    }
}