import java.util.*;

class Assignment_No34_Task2 {
    public static int CountOddDigit(int iValue) {
        int iCountOdd = 0;

        while (iValue != 0) {
            int iDigit = iValue % 10;
            iValue = iValue / 10;

            if (iDigit % 2 != 0) {
                iCountOdd++;
            }
        }
        return iCountOdd;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter The Number : ");
        iNo1 = sobj.nextInt();

        int iRet = 0;
        iRet = CountOddDigit(iNo1);
        System.out.println("Total Odd Digit in the Number is : " + iRet);

        sobj.close();
    }
}