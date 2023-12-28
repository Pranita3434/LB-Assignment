import java.util.*;

class Assignment_No34_Task5 {
    public static int CountDiff(int iValue) {
        int iCountDiff = 0, iCountOdd = 0, iCountEven = 0;

        while (iValue != 0) {
            int iDigit = iValue % 10;
            iValue = iValue / 10;

            if (iDigit % 2 == 0) {
                iCountEven = iCountEven + iDigit;
            } else {
                iCountOdd = iCountOdd + iDigit;
            }
        }
        iCountDiff = iCountEven - iCountOdd;
        return iCountDiff;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter The Number : ");
        iNo1 = sobj.nextInt();

        int iRet = 0;
        iRet = CountDiff(iNo1);
        System.out.println("Summation is : " + iRet);

        sobj.close();
    }
}