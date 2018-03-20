void lock(CAR, MUTEX) 
{do 
{         
if (pthread_mutex_lock(&MUTEX)) { 
printf("CAR %d is locked\n\n", CAR);     
} 
} while(0);
}
void unlock(CAR, MUTEX) 
{do 
{     
 if (pthread_mutex_unlock(&MUTEX)) { 
printf("CAR %d is unlocked\n\n", CAR);  
} 
} while(0);}
void intersection(){
	printf("------------Car is in Traffic Intersection------------\n\n");
}
main()
{
	int n,i;
  	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  	printf("               Traffic Intersection Problem                  \n");
  	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  	printf("North :N\nSouth :S\nEast :E\nWest :W \n\n");
  	pthread_mutex_init(&NW,NULL);
  	pthread_mutex_init(&NE,NULL);
  	pthread_mutex_init(&SE,NULL);
  	pthread_mutex_init(&SW,NULL);
printf("Enter No Of Cars\n");
scanf("%d",&n);
int cid[n];
pthread_t c[n];
for(i = 0; i <n; i++)
{
cid[i] = i;
 pthread_create(&c[i], NULL, criticalsection,(void*)&cid[i]);
 sleep(1);
}
for(i=0;i<n;i++)
{
pthread_join(c[i],NULL);
}
}
