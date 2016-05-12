

#ifndef SMOOTH_DEFORMATION_H
#define SMOOTH_DEFORMATION_H

/**
 * @author  Fabrizio Morciano <fabrizio.morciano@gmail.com>
 */

#include "tcommon.h"
//#include "tgeometry.h"
//#include "ext/TriParam.h"
#include <vector>

#undef DVAPI
#undef DVVAR
#ifdef TNZEXT_EXPORTS
#define DVAPI DV_EXPORT_API
#define DVVAR DV_EXPORT_VAR
#else
#define DVAPI DV_IMPORT_API
#define DVVAR DV_IMPORT_VAR
#endif

#include "StrokeDeformationImpl.h"

namespace ToonzExt
{
class DVAPI SmoothDeformation : public StrokeDeformationImpl
{
	SmoothDeformation();

  public:
	virtual ~SmoothDeformation();

	bool check_(const ContextStatus *status);

	bool findExtremes_(const ContextStatus *, Interval &);
	double findActionLength();

	virtual void draw(Designer *);

	static SmoothDeformation *instance();
};
}
#endif /* SMOOTH_DEFORMATION_H */
//-----------------------------------------------------------------------------
//  End Of File
//-----------------------------------------------------------------------------
