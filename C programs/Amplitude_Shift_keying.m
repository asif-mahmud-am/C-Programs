
bitStream=[0 1 0 1 0 0];%defining a bit stream
length_bitStream=length(bitStream);
if (bitStream(length_bitStream)==1)
bitStream(length_bitStream+1)=1;
else
bitStream(length_bitStream+1)=0;
end
Amplitude = 5;
time=0:0.001:1;
frequency_carrier1=25;
carrier1=Amplitude*sin(2*pi*frequency_carrier1*time);

for i=1:length_bitStream
for j=(i-1)*100:(i*100)
if bitStream(i)==1
y(j+1)=carrier1(j+1);
else
y(j+1)=0;
end
end
end

%ASK Plotting
subplot(4,1,1)
stairs(bitStream)
axis([1 7 -6 6])
title('Given Sequence');
subplot(4,1,2)
plot(time,carrier1)
title('Carrier Signal');
subplot(4,1,3)
plot(y)
title('ASK Modulation');
axis([0 600 -6 6])