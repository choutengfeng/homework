void bubbleSort(int * const a){
	int i,j,temp;
	for(i=0;i<5;i++) {
		for(j=0;j<4;j++){
			
		if (a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	
}
