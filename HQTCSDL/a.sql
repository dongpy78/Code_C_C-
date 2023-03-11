create table ThanNhan (
	maNV varchar(5) foreign key references NhanVien(maNV),
	tenTN nvarchar(30) primary key,
	phai bit not null,
	ngaySinh date not null,
	quanHe nvarchar(20) not null
)

insert into ThanNhan values
('NV1', N'DINH BA KIEN', 'NAM', '1995/07/15', N'CON TRAI'),
('NV1', N'NGUYEN THANH THAO', 'NU', '1988/04/08', N'VỢ'),
('NV2', N'VO THANH SON', 'NAM', '1950/09/23', N'CHA'),
('NV3', N'LE THI HUONG', 'NU', '1984/01/09', N'VỢ'),
('NV3', N'TRAN LE NGOC HOA', 'NU', '2017/09/12', N'CON GÁI'),
('NV6', N'TRAN MINH AN', 'NAM', '1980/08/05', N'ANH TRAI'),
('NV7', N'LE THI NGAN', 'NU', '1980/06/07', N'EM GÁI'),
('NV9', N'TRAN QUOC VUONG', 'NAM', '1975/05/05', N'CHỒNG')

-- phan cong
create table PhanCong (
	maNV varchar(5) foreign key references NhanVien(maNV),
	maDA varchar(5) foreign key references DeAn(maDA),
	thoiGian decimal(5,1) not null
	primary key (maNV, maDA)
)

insert into PhanCong values
('NV1', 'DA1', 32.5),
('NV1', 'DA2', 7.5),
('NV1', 'DA3', 10),
('NV2', 'DA3', 40),
('NV2', 'DA4', 20),
('NV2', 'DA5', 20),
('NV3', 'DA1', 20),
('NV3', 'DA2', 20),
('NV4', 'DA3', 10),
('NV5', 'DA4', 10),
('NV7', 'DA6', 30),
('NV8', 'DA4', 10),
('NV8', 'DA6', 20),
('NV9', 'DA4', 15),

-- ddiemPB
create table ddiemPB (
	maPB varchar(5) foreign key references PhongBan(maPB),
	diaDiem nvarchar(100) primary key
)

insert into ddiemPB values
('P1', 'TPHCM'),
('P2', 'HA NOI'),
('P3', 'NHA TRANG'),
('P3', 'TPHCM'),
('P3', 'VUNG TAU')