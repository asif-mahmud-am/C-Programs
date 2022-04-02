
clc;
close all;
clear all;
n=input('Enter n value for n-bit PCM system :  ');
n1=input('Enter number of samples in a period : ');
L=2^n;

x=0:2*pi/n1:4*pi;               
s=8*sin(x);
subplot(3,1,1);
plot(s);
title('Analog Signal');
ylabel('Amplitude--->');
xlabel('Time--->');
subplot(3,1,2);
stem(s);grid on;  title('Sampled Sinal');  ylabel('Amplitude--->');  xlabel('Time--->');

 %  Quantization Process
 vmax=8;
 vmin=-vmax;
 del=(vmax-vmin)/L;
 part=vmin:del:vmax;                                  
 code=vmin-(del/2):del:vmax+(del/2);       
 [ind,q]=quantiz(s,part,code);                    
                                                                      
 l1=length(ind);
 l2=length(q);
  
 for i=1:l1
    if(ind(i)~=0)                                            
       ind(i)=ind(i)-1;
    end 
    i=i+1;
 end   
  for i=1:l2
     if(q(i)==vmin-(del/2))                         
         q(i)=vmin+(del/2);
     end
 end    
 subplot(3,1,3);
 stem(q);grid on;                                       
 title('Quantized Signal');
 ylabel('Amplitude--->');
 xlabel('Time--->');