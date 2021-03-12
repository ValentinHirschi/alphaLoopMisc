
Auto S invd, E, shift;
S r, s;
CF a, num, ncmd, conf1, ellipsoids, allenergies, replace, constants;
NF energies;
CTable pftopo(0:0,0:1);
CTable pfmap(0:0,0:1);

Fill pfmap(0,0) = diag(0,0);
Fill pfmap(0,1) = diag(0,1);


Fill pftopo(0,0) = constants()*
allenergies(k1,k1+p1,k1-k3+p1,k1-p2,k2,k1+k2)*
ellipsoids(+1*E0+1*E4+1*E5,+1*E1+1*E4+1*E5+energies(+1*p1),+1*E2+1*E4+1*E5+energies(-1*k3+1*p1),+1*E3+1*E4+1*E5+energies(-1*p2),+1*E0+1*E3+energies(+1*p2),+1*E1+1*E3+energies(+1*p1+1*p2),+1*E2+1*E3+energies(-1*k3+1*p1+1*p2),+1*E3+1*E4+1*E5+energies(+1*p2),+1*E0+1*E2+energies(+1*k3-1*p1),+1*E1+1*E2+energies(+1*k3),+1*E2+1*E3+energies(+1*k3-1*p1-1*p2),+1*E2+1*E4+1*E5+energies(+1*k3-1*p1),+1*E0+1*E1+energies(-1*p1),+1*E1+1*E2+energies(-1*k3),+1*E1+1*E3+energies(-1*p1-1*p2),+1*E1+1*E4+1*E5+energies(-1*p1),+1*E0+1*E1+energies(+1*p1),+1*E0+1*E2+energies(-1*k3+1*p1),+1*E0+1*E3+energies(-1*p2))*(
	+1*invd0*invd1*invd2*invd3*num(ncmd(-1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd1*invd2*invd3*num(ncmd(-1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd2*invd3*num(ncmd(-1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd3*num(ncmd(-1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(-1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd4*invd0*invd1*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5) )
	+1*invd4*invd1*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd5*invd1*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*invd5*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd5*invd6*invd2*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd0*invd1*invd2*num(ncmd(+1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd1*invd2*num(ncmd(+1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd2*num(ncmd(+1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd5*invd6*invd7*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd4*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd5*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd5*invd6*num(ncmd(+1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*num(ncmd(+1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd8*invd0*invd1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd8*invd1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd9*invd1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd9*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd9*invd10*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd0*invd1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd3*num(ncmd(+1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd9*invd10*invd11*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd8*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd9*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd9*invd10*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd4*invd0*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd8*invd4*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd4*invd5*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd9*invd5*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*invd0*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5) )
	+1*invd4*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*invd5*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd0*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd4*invd5*invd7*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd8*invd9*invd5*invd7*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd8*invd9*invd11*invd7*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd4*invd5*invd7*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd8*invd4*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd4*invd5*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd8*invd9*invd5*num(ncmd(+1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd4*invd5*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*num(ncmd(+1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd12*invd0*invd2*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd12*invd2*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd13*invd2*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd13*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd13*invd14*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd0*invd2*invd3*num(ncmd(+1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd2*invd3*num(ncmd(+1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd3*num(ncmd(+1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd13*invd14*invd15*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd13*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd13*invd14*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd4*invd0*invd2*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd12*invd4*invd2*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd4*invd6*invd2*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd13*invd6*invd2*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd0*invd2*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5) )
	+1*invd4*invd2*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd6*invd2*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd0*invd2*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd2*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd4*invd6*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd13*invd6*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd13*invd15*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd4*invd6*invd7*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd12*invd4*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd4*invd6*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd13*invd6*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd4*invd6*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*num(ncmd(+1*E1+energies(-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd12*invd8*invd0*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd12*invd8*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd8*invd10*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd14*invd10*invd3*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd0*invd3*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd8*invd3*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd10*invd3*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd0*invd3*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd3*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd8*invd10*invd11*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd14*invd10*invd11*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd14*invd15*invd11*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd8*invd10*invd11*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd8*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd8*invd10*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd14*invd10*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd8*invd10*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd12*invd8*invd4*invd0*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd8*invd4*invd0*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E0+1*E5) )
	+1*invd4*invd0*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E0+1*E5) )
	+1*invd0*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E0+1*E5) )
	+1*invd12*invd8*invd4*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd8*invd11*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd12*invd15*invd11*invd7*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd8*invd4*invd7*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd8*invd11*invd7*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd4*invd7*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd12*invd8*invd4*num(ncmd(+1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E0+1*E5) )
	+1*invd8*invd4*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E0+1*E5) )
	+1*invd4*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E0+1*E5) )
	+1*num(ncmd(+1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E0+1*E5) )
	+1*invd16*invd1*invd2*invd3*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd16*invd2*invd3*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd3*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd17*invd2*invd3*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd17*invd3*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd17*invd18*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd1*invd2*invd3*num(ncmd(+1*E0, -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd2*invd3*num(ncmd(+1*E0, -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd3*num(ncmd(+1*E0, -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd17*invd18*invd0*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*num(ncmd(+1*E0), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd17*num(ncmd(+1*E0), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd17*invd18*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E0, -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd5*invd1*invd2*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd16*invd5*invd2*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd5*invd6*invd2*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd17*invd6*invd2*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd5*invd1*invd2*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd5*invd2*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd5*invd6*invd2*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd1*invd2*num(ncmd(+1*E0, +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd2*num(ncmd(+1*E0, +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd5*invd6*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd17*invd6*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd17*invd0*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd5*invd6*invd7*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd16*invd5*num(ncmd(+1*E0), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd5*invd6*num(ncmd(+1*E0), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd17*invd6*num(ncmd(+1*E0), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd5*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd5*invd6*num(ncmd(+1*E0, +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*num(ncmd(+1*E0, +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd16*invd9*invd1*invd3*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd16*invd9*invd3*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd9*invd10*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd18*invd10*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd9*invd1*invd3*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd9*invd3*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd9*invd10*invd3*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd1*invd3*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd3*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd9*invd10*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd18*invd10*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd18*invd0*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd9*invd10*invd11*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd16*invd9*num(ncmd(+1*E0), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd9*invd10*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd18*invd10*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd9*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd9*invd10*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd16*invd9*invd5*invd1*num(ncmd(+1*E0), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd9*invd5*invd1*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd5*invd1*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd1*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E1+1*E5+energies(+1*p1)) )
	+1*invd16*invd9*invd5*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd9*invd11*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd16*invd0*invd11*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd9*invd5*invd7*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd9*invd11*invd7*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd5*invd7*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd16*invd9*invd5*num(ncmd(+1*E0), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd9*invd5*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd5*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*num(ncmd(+1*E0, +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E1+1*E5+energies(+1*p1)) )
	+1*invd17*invd13*invd2*invd3*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd17*invd13*invd3*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd13*invd14*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd18*invd14*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd13*invd2*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd13*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd13*invd14*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd2*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd13*invd14*invd15*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd17*invd18*invd14*invd15*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd17*invd18*invd0*invd15*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd13*invd14*invd15*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd17*invd13*num(ncmd(+1*E0), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd13*invd14*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd18*invd14*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd13*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd13*invd14*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E0, +1*E1+energies(-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1), +1*E3+1*E5+energies(-1*p2)) )
	+1*invd17*invd13*invd6*invd2*num(ncmd(+1*E0), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd13*invd6*invd2*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd6*invd2*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd2*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd17*invd13*invd6*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd17*invd13*invd15*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd17*invd0*invd15*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd13*invd6*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd13*invd15*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd6*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*invd17*invd13*invd6*num(ncmd(+1*E0), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd13*invd6*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd6*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E2+1*E5+energies(-1*k3+1*p1)) )
	+1*invd18*invd14*invd10*invd3*num(ncmd(+1*E0), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd14*invd10*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd10*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd3*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E3+1*E5+energies(-1*p2)) )
	+1*invd18*invd14*invd10*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd18*invd14*invd15*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd18*invd0*invd15*invd11*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd14*invd10*invd11*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd14*invd15*invd11*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd10*invd11*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd18*invd14*invd10*num(ncmd(+1*E0), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd14*invd10*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd10*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), -1*energy(c3)+1*E5), ncmd(+1*E4, +1*E3+1*E5+energies(-1*p2)) )
	+1*invd0*invd15*invd11*invd7*num(ncmd(+1*E0), ncmd(+1*E4) )
	+1*invd15*invd11*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1)), ncmd(+1*E4) )
	+1*invd11*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1)), ncmd(+1*E4) )
	+1*invd7*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2)), ncmd(+1*E4) )
	+1*num(ncmd(+1*E0, +1*E1+energies(-1*p1), +1*E2+energies(+1*k3-1*p1), +1*E3+energies(+1*p2), -1*energy(c3)+1*E5), ncmd(+1*E4) )
	);
Fill pftopo(0,1) = constants()*
allenergies()*
ellipsoids()*(
	1
);

