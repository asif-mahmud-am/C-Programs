fm=25;
fc=400;
B=10
t=0:0.0001:0.5;

m=cos(2*pi*fm*t);
subplot(3,1,1);
plot(t,m);
xlabel('Time');
ylabel('Amplitude');
title('Message Signal');
grid on;

c=cos(2*pi*fc*t);
subplot(3,1,2);
plot(t,c);
xlabel('Tme');
ylabel('Amplitude');
title('Carrier Signal');
grid on;

y=cos(2*pi*fc*t+(B.*sin(2*pi*fm*t)));
subplot(3,1,3);
plot(t,y);
xlabel('Time');
ylabel('Amplitude');
title('FM Signal');
grid on;
 