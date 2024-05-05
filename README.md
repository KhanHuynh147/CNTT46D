create database qlphongmay
go
use qlphongmay
go 

create table phongmay(
maphong varchar(20) not null,
ghichu nvarchar(100),
primary key(maphong)
);

create table maytinh(
mamay varchar(20) not null primary key,
tenmay nvarchar(100) not null,
maphong varchar(20) not null
constraint fk_maphong foreign key (maphong) references phongmay(maphong)
);

create table monhoc(
mamon varchar(20) not null primary key,
tenmon nvarchar(100) not null,
sogio int
);

create table dangky(
mamon varchar(20) not null,
maphong varchar(20) not null,
ngaydk datetime,
primary key(mamon,maphong)
);

alter table dangky
add constraint ck_ngaydk check (ngaydk > '05/05/2024');

alter table maytinh
add constraint ck_maphong check (maphong = 'pm01' 'pm02' 'pm03' 'pm04');

alter table monhoc
add constraint ck_sogio check (sogio > 0 and sogio < 4);

alter table dangky
add constraint fk_mamon foreign key (mamon) references monhoc(mamon);

alter table dangky
add constraint fk01_maphong foreign key (maphong) references maytinh(maphong);
