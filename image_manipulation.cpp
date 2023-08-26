/* % Representing image in matrix form.

Im1 = imread('D:\Maths_Project\wonderful rainbow.jpg');
Im2 = imread('D:\Maths_Project\ironman 2.jpg');

% Displayind the images on screen.

%imshow(Im1);
%imshow(Im2);



% Subtracting two Images:
%The fundamental idea to subtract two images is matrix subtraction.

figure;
title('First Imager');
g = size(Im1);

Im2=imresize(Im2,[g(1),g(2)]);
figure;
title('Second Image');

 for i = 1:g(1)
 for j = 1:g(2)
     for k=1:3
 output(i,j,k)=(Im1(i,j,k) - Im2(i,j,k));
     end
 end
end
figure;
imshow(output);
title('Added Image'); */