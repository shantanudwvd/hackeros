create table client_master_1(client_no varchar(6) primary key,name char(20));
create table client_master_2(client_no varchar(6) references client_master_1,age int,balance int);
insert into client_master_2 values('C0001',19,1000);
insert into client_master_2 values('C0002',18,2000);
insert into client_master_2 values('C0003',20,3000);
insert into client_master_2 values('C0004',21,4000);
select * from client_master_1
drop table client_master_1
