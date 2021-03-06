#ifndef lint
static char GEODESIC_H_ID[] = "@(#)geodesic.h	4.1	93/03/08	GIE	REL";
#endif
extern double dmstor();
struct geodesic {
	double	A;
	double	LAM1, PHI1, ALPHA12;
	double	LAM2, PHI2, ALPHA21;
	double	DIST;
	double	ONEF, FLAT, FLAT2, FLAT4, FLAT64;
	int	ELLIPSE;
} GEODESIC;
# define a	GEODESIC.A
# define lam1	GEODESIC.LAM1
# define phi1	GEODESIC.PHI1
# define al12	GEODESIC.ALPHA12
# define lam2	GEODESIC.LAM2
# define phi2	GEODESIC.PHI2
# define al21	GEODESIC.ALPHA21
# define S	GEODESIC.DIST
# define f	GEODESIC.FLAT
# define onef	GEODESIC.ONEF
# define f2	GEODESIC.FLAT2
# define f4	GEODESIC.FLAT4
# define ff2	GEODESIC.FLAT4
# define f64	GEODESIC.FLAT64
# define ellipse GEODESIC.ELLIPSE
	int
n_alpha, n_S;
	double
to_meter, fr_meter, del_alpha;
void geod_setup(int, char **);
void geod_forwd(void);
void geod_prefor(void);
void geod_invrs(void);
