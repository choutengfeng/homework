void bubbleSort(const int  *const a){
	int i,j,temp;
	int faker[5];
	for(i=0;i<5;i++){
		faker[i]=a[i];
	}
	for(i=0;i<5;i++) {
		for(j=0;j<4;j++){
			
		if (faker[j]>faker[j+1]){
			temp=faker[j];
			faker[j]=faker[j+1];
			faker[j+1]=temp;
		}
	}
	}
	for(i=0;i<5;i++){
		printf ("%d ",faker[i]);
	}
}
