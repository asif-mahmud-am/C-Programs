n=1:1000;
fc=1/10;
fm=1/500;
x=cos(2*pi*fc*n);

y=sin(2*pi*fm*n);

z=x.*y;
subplot(2,2,1);plot(x);title('carrier wave');
subplot(2,2,2);plot(y);title('DSB SC signal');
subplot(2,1,2);plot(z);title('message signal');
