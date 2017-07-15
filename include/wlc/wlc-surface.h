#ifndef _WLC_WLC_SURFACE_H_
#define _WLC_WLC_SURFACE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

struct wlc_surface;


/** Get list of subsurfaces. Returned array is a direct reference and shouldn't be modified */
const wlc_resource* wlc_surface_get_subsurface_list_ptr(const wlc_resource surface, size_t *out_memb);

/** Returns surface coordinate scale (weight and height) */
void wlc_surface_get_coordinate_scale(const wlc_resource surface, double out[2]);

/** Returns subsurface position */
void wlc_surface_get_subsurface_position(const wlc_resource surface, struct wlc_point *out);


#ifdef __cplusplus
}
#endif

#endif /* _WLC_WLC_SURFACE_H_ */
