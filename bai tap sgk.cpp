#include <stdio.h>
#include <math.h>
 
// cau a 
void input (int a[100][100], int m, int n)
{

	int i,j;
	for (i=0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			printf ("a[%d][%d]: ",i,j);
			scanf ("%d", &a[i][j]); 
		} 
	} 
} 
// cau b 
void output (int a[100][100], int m, int n)
{
	printf ("Mang vua nhap la:\n ");
	int i ,j;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j< n;j++)
		{
			printf ("%d\t", a[i][j]); 
		}
		printf ("\n") ;
	} 
}
// cau d
int tong (int a[100][100], int m, int n)
{
	int sum = 0;
	int i,j; 
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			sum += a[i][j]; 
		} 
	}
	return sum; 
} 
// cau e 
int tong_chan (int a[100][100], int m, int n)
{
	int i,j;
	int sum = 0;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (a[i][j] % 2 == 0 )
			{
				sum += a[i][j]; 
			} 
		} 
	} 
	return sum; 
} 
// cau f 
int tong_le (int a[100][100], int m, int n)
{
	int i,j;
	int sum = 0;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (a[i][j] % 2 != 0 )
			{
				sum += a[i][j]; 
			} 
		} 
	} 
	return sum; 
}
//cau h
int tong_cheo_chinh (int a[100][100], int m, int n)
{
	int i,j;
	int sum = 0;
	for (i = 0;i<n;i++)
	{
		for ( j = 0;j<n;j++)
		{
			if (i == j)
			{
				sum += a[i][i]; 
			} 
		} 
    } 
	return sum;   
} 
// cau i 
int tong_cheo_phu (int a[100][100], int m, int n)
{
	int i,j, sum =0;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (i == j)
			{
				sum += a[i][n-i-1];
		    }
		}  
	}
	return sum; 
} 
// cau j
int tong_bien(int a[100][100], int m, int n)
{
	int i,j,sum = 0;
	for (j = 0; j < n; j++)
	{
		sum += a[0][j];
		sum += a[m-1][j]; 
	}
	for (i = 1 ;i < m-1; i++)
	{
		sum += a[i][0];
		sum += a[i][n-1];
	}
	return sum; 
} 
// cau k
int  chan_dau (int a[100][100], int m, int n)
{
	int i,j;
	for (i = 0; i < m; i++)
	{
		for (j = 0 ;j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				return a[i][j]; 
			} 
		} 
	}
	return -1; 
}
// cau l
int le_dau (int a[100][100], int m, int n)
{
	int i,j;
	for (i = 0 ; i < m; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				return a[i][j]; 
			} 
		} 
	} 
	return -1; 
} 
// cau m
int snt (int n)
{
	if (n < 2)
	{
		return 0; 
    }
    int i;
	for (i =2 ; i<n/2;i++)
	{
		if  (n % i==0)
		{
			return 0; 
		 } 
	 } 
	 return 1; 
}
int snt_dau (int a[100][100], int m, int n)
{
	int i,j;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (snt(a[i][j])) 
			{
				return a[i][j]; 
			}
		} 
	}
	return -1; 
} 
// cau n 
int chan_cuoi(int a[100][100], int m, int n)
{
	int cuoi = -1; 
	int i,j;
	for (i = 0; i < m; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				cuoi = a[i][j]; 
			}	 
		} 
	}
	return cuoi; 
} 
// cau o
int scp (int n)
{
	return sqrt(n) == (int)sqrt(n); 
} 
int scp_cuoi(int a[100][100], int m, int n)
{
	int cuoi = -1;
	int i ,j;
	for (i = 0; i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (scp(a[i][j]))
			{
				cuoi = a[i][j]; 
			} 
		} 
    }
	return cuoi;  
} 
// cau p
int Max (int a[100][100], int m, int n)
{
	int max = a[0][0];
	int i,j;
	for (i = 0;i<m;i++)
	{
		for (j =0;j<n;j++)
		{
			if (max < a[i][j]) 
			{
				max = a[i][j]; 
			}
		} 
	}
	return max;
}
// cau q 
int dem_chan (int a[100][100], int m, int n)
{
	int dem;
	int i,j;
	for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			if (a[i][j] % 2 == 0)
			{
				dem ++; 
			} 
		} 
	}
	return dem; 
} 
// cau r
int dem_max (int a[100][100], int m, int n)
{
	int dem;
	int max = a[0][0];
	int i,j;
	for ( i = 0;i<m;i++)
	{
		for ( j = 0;j<n;j++)
		{
			if (max < a[i][j] && a[i][j] % 2 == 0)
			{
				max = a[i][j];
				dem ++; 
			} 
		} 
	}
	return dem; 
} 
// cau s 
void vitrimax_dautien (int a[100][100], int m, int n)
{
	int max = a[0][0];
	int i ,j;
	int dong = 0;
	int cot = 0;
	 
	for ( i = 0; i<m;i++)
	{
		for ( j = 0;j<n;j++)
		{
			if (max<a[i][j])
			{
				max = a[i][j];
				dong = i;
				cot = j; 
			} 
		} 
	}
	printf ("\nvi tri phan tu lon nhat la:[%d][%d]\n",dong,cot);
} 
// cau t 
int tong_mot_dong (int a[100][100], int m)
{
	int sum = 0;
	int i;
	for (i=0;i<m;i++)
	{
		sum+= a[0][i]; 
	}
	return sum; 
} 
// cau u 
/* 
tao 2 bien la tong_max = 0, dong_max = 0. sau do chay 2 dong for, ta tim dong lon nhat cho dong_max += a[i][j].
Thoat khoi dong for thu 2, dat dieu kien if neu dong lon nhat > tong lon nhat if (dong_max > tong_max).sau do cho tong_max = dong_max, và cho dong_max = i 
printf ("dong co tong lon nhat la dong %d", dong_max + 1 );
*/ 
void dong_sum_max (int a[100][100], int m,int n)     
{
	int tong_max = 0; // tong lon nhat 
    int dong_max = 0; // dong lon nhat 
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            dong_max += a[i][j];
        }

        if(dong_max > tong_max) {                                   
            tong_max = dong_max;
            dong_max = i;
        }
    }
    printf("\nDong co tong lon nhat la dong %d\n", dong_max + 1);
}
// cau v

int sapxep_tang (int a[100][100], int m , int n)
{
	int i, j, k, temp;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = j+1; k < m; k++) {
                if (a[i][k] < a[i][j]) {   // So sánh giá tr? c?a 2 ph?n t?
                    temp = a[i][j];           // Ð?i ch? các ph?n t? n?u c?n thi?t
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    printf ("ma tran tang dan:\n") ;
    for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			printf ("%d\t", a[i][j]); 
		} 
		printf ("\n"); 
	} 
	return 0; 
}
	

//sap xep ma tran giam dan 
int sapxep_giam_dan (int a[100][100], int m, int n)
{
	int i, j, k, temp;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (k = j+1; k < m; k++) {
                if (a[i][k] > a[i][j]) {   // So sánh giá tr? c?a 2 ph?n t?
                    temp = a[i][j];           // Ð?i ch? các ph?n t? n?u c?n thi?t
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    printf ("ma tran giam dan:\n") ;
    for (i = 0;i<m;i++)
	{
		for (j = 0;j<n;j++)
		{
			printf ("%d\t", a[i][j]); 
		} 
		printf ("\n"); 
	} 
	return 0; 
}
	
int main ()
{ 
	int m,n;
	int a[100][100];
	printf ("\n________________MATRIX__________________\n");
	printf ("\nnhap so dong: ");
	scanf ("%d", &m);
	printf ("nhap so cot: ");
	scanf ("%d", &n);
	input(a,m,n);
	output(a,m,n);
	printf ("Tong cua mang tren: %d", tong(a,m,n));
	printf ("\nTong cua mang chan: %d", tong_chan(a,m,n));
	printf ("\nTong cua mang le: %d", tong_le(a,m,n));
	printf ("\nTong cheo chinh: %d", tong_cheo_chinh(a,m,n));
	printf ("\nTong cheo phu: %d", tong_cheo_phu(a,m,n));
	printf ("\nTong bien: %d", tong_bien(a,m,n));
	

	if (chan_dau(a,m,n)==-1)
	{
		printf ("\nkhong co"); 
	}
	else 
	{
		printf ("\nphan tu chan dau tien la: %d", chan_dau(a,m,n)); 
	} 
	 
	if (le_dau(a,m,n)==-1)
	{
		printf ("\nkhong co"); 
	}
	else 
	{
		printf ("\nphan tu le dau tien la: %d", le_dau(a,m,n)); 
	} 
	if (snt_dau (a,m,n)==-1)
	{
		printf ("\nkhong co"); 
	}
	else 
	{
		printf ("\nphan tu snt dau tien la: %d", snt_dau(a,m,n)); 
	} 
	if (chan_cuoi(a,m,n) == -1)
	{
		printf ("\nkhong co"); 
	}
	else 
	{
		printf ("\nphan tu chan cuoi la: %d", chan_cuoi(a,m,n));
	} 
	if (scp_cuoi(a,m,n)==-1)
	{
		printf ("\nkhong co"); 
	}
	else 
	{
		printf ("\nphan tu so chinh phuong cuoi la: %d", scp_cuoi(a,m,n)); 
	} 
	printf ("\nSo lon nhat trong ma tran:%d", Max(a,m,n));
	printf ("\nphan tu chan co trong ma tran: %d", dem_chan(a,m,n));
	printf ("\nSo chan lon nhat trong ma tran: %d", dem_max(a,m,n));
	vitrimax_dautien(a,m,n);
	printf ("\ntong mot dong trong ma tran: %d", tong_mot_dong(a,m));
	dong_sum_max (a,m,n);
	
	sapxep_tang(a,m,n);
	sapxep_giam_dan(a,m,n);

    return 0; 
}
