package sudoku;
import java.io.*;
import java.util.*;

public class Sudoku {
	public static int[][] a = new int[9][9];
	
	public static void doc(){
		Scanner f = null;
		try{
			FileInputStream fi = new FileInputStream("input.inp");
			f = new Scanner(fi);
			for(int i=0;i<9;i++){
				for(int j=0;j<9;j++){
					a[i][j]=f.nextInt();
				}
			}
		}
		catch(FileNotFoundException e){
			System.out.print("File not found");
			return;
		}
		finally{
			if(f!=null)
				f.close();
		}
	}
	
	public static void xuat(){
		PrintWriter g = null;
		try{
			FileOutputStream fo = new FileOutputStream("out.txt");
			g = new PrintWriter(fo);
			for(int i=0;i<9;i++){
				for(int j=0;j<9;j++){
					g.print(a[i][j]);
					g.print(" ");
				}
				g.println();
			}
		}
		catch(FileNotFoundException e){
			System.out.print("File not found");
			return;
		}
		finally{
			if(g!=null)g.close();
		}
	}
	
	public static boolean tinh(int m,int n,int p){
		for (int q=0; q<9; q++)
			if ((a[n][q]==m) || (a[q][p]==m))
				return false;
		
		int k = (n/3)*3, l= (p/3)*3;
		
		for (int q=k; q<=k+2; q++)
			for (int t=l; t<=l+2; t++)
				if (a[q][t] == m)
					return false;
		return true;
	}
	
	public static void thu(int i,int j){
		if (j>8)
			if (i==8)
				xuat();
			else
				thu(i+1,0);
		else{
			if (a[i][j]==0)
				for(int k=1; k<=9; k++){
					if (tinh(k,i,j)){
						a[i][j]=k;
						if (j==8)
							thu(i,j+1);
						a[i][j]=0;
					}
				}
			else
				thu(i,j+1);
		}
	}
	
	public static void main(String[] args) throws IOException{
		doc();
		thu(0,0);
	}
}