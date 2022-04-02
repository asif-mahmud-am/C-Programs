
close all; clear;
%continuous signal
L=1000;
fsim=22000; 
fc=fsim/L; 
Tcycle=1/fc;
Tcont=1/fsim;
continuous_time_axis=[0:Tcont:Tcycle];
ycont=sin(2*pi*fc*continuous_time_axis); 


%ideal sampled signal
num_samples_cycle=8;
Tm=Tcont*L/num_samples_cycle; 
discrete_time_axis=[0:Tm:Tcycle];
ysampled=sin(2*pi*fc*discrete_time_axis);
figure(1);
plot(continuous_time_axis,ycont); title('Cycle of the continuous signal with 8 samples'); xlabel('n');
hold on;
stem(discrete_time_axis,ysampled);
hold off;

%PAM Signal
N=length(ycont);
z=zeros(1,N); 
n=floor(Tm/Tcont);
z(1:n:N)=ysampled; 
h=zeros(1,100);
h(1:10)=1;
pamreal=conv(h,z);                  
figure();
plot(pamreal(1:L));title('PAM Signal'); xlabel('n')

figure(); 
plot(continuous_time_axis, pamreal(1:N));title('PAM signal and continuous signal overlapped'); xlabel('n')
hold on;
plot(continuous_time_axis, ycont)