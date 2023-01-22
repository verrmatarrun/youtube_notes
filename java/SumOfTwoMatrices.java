import java.util.Scanner;

class SumOfTwoMatrices
{
	public static void main(String args[])
	{
		Scanner kb=new Scanner(System.in);
		int row1,row2,col1,col2;

		System.out.println("Enter rows and cols of first matrix");
		row1=kb.nextInt();
		col1=kb.nextInt();
		int mat1[][]=new int [row1][col1];

		System.out.println("Enter rows and cols of second matrix");
		row2=kb.nextInt();
		col2=kb.nextInt();
		int mat2[][]=new int [row2][col2];

		System.out.println("Enter values in matrix1 ");
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
				mat1[i][j]=kb.nextInt();
		}

		System.out.println("Enter values in matrix2 ");
		for(int i=0;i<row2;i++)
		{
			for(int j=0;j<col2;j++)
				mat2[i][j]=kb.nextInt();
		}
		if(row1==row2 &&col1==col2)
		{
			int mat3[][]=new int[row1][col1];
			for(int i=0;i<row1;i++)
				for(int j=0;j<col1;j++)
					mat3[i][j]=mat1[i][j]+mat2[i][j];

			System.out.println("The sum of mat1 and mat2 is ");
			for(int i=0;i<row1;i++)
			{
				for(int j=0;j<col1;j++)
					System.out.print(mat3[i][j]+" ");
				System.out.println("");
			}
		}
		else
		{
			System.out.println("We cannot add two matrices of different dimensions");
		}


		kb.close();		
	}
}