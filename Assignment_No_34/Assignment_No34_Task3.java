import java.util.*;

class Assignment_No34_Task3 {
    public static int CountRange(int iValue) {
        int iCount = 0;

        while (iValue != 0) {
            int iDigit = iValue % 10;
            iValue = iValue / 10;

            if ((iDigit > 3) && (iDigit < 7)) {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter The Number : ");
        iNo1 = sobj.nextInt();

        int iRet = 0;
        iRet = CountRange(iNo1);
        System.out.println("Total Digit in between 3 and 7 Number is : " + iRet);

        sobj.close();
    }
}