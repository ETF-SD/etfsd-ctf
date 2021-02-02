FROM centos
RUN yum -y update
RUN yum install openssh-server -y
RUN ssh-keygen -A
ADD ./sshd_config /etc/ssh/sshd_config
RUN useradd -m etfsd
RUN echo "etfsd{N1c3_w0Rk_U$!nG_sSh}" >>/users.txt
RUN echo etfsd:supersafepassword123 | chpasswd
CMD /usr/sbin/sshd -D
