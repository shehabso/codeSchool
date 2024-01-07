#MAINTAINER  Shehab-tarek   e-mail:shehab162519@gmail.com
# fetch ubuntu image 
FROM ubuntu:18.04
# install GCC,CPPcheck,VIM ,Ruby,ceedling on image 

ENV LIBGL_ALWAYS_INDIRECT=1
#depend on your Time Zone edit it 
ENV TZ=Africa
ENV DEBIAN_FRONTEND=noninteractive
RUN \
    apt-get update && \
    apt install  -y build-essential && \
    apt-get install -y vim && \ 
    apt-get install -y cppcheck-gui && \
    apt-get install -y ruby-full


 # Install  PyQt4, py3, oencv, matplotlib , pandas, numpy
RUN \
apt-get install -y python3 python3-pyqt4 python3-opencv python3-matplotlib python3-pandas python3-pip python3-numpy sudo git


#create a directory for our misra_rule files
RUN mkdir /misra_rule
# copy MISRC.txt file in the path 
COPY Misra_2012.txt /misra_rule/Misra_2012.txt
#install ceedling 
RUN gem install ceedling
#commad that will be invoked when container starts
ENTRYPOINT ["/bin/bash"]