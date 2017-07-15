#include "internal.h"
#include "visibility.h"
#include "resources/types/surface.h"
#include <wlc/wlc-surface.h>


WLC_API const wlc_resource*
wlc_surface_get_subsurface_list_ptr(const wlc_resource surface, size_t *out_memb)
{
   if (out_memb)
      *out_memb = 0;
   
   struct wlc_surface* s = convert_from_wlc_resource(surface, "surface");
   return (surface ? chck_iter_pool_to_c_array(&s->subsurface_list, out_memb) : NULL);
}


WLC_API void
wlc_surface_get_subsurface_position(const wlc_resource surface, struct wlc_point *out) {
   struct wlc_surface* s = convert_from_wlc_resource(surface, "surface");
   *out = s->commit.subsurface_position;
}

WLC_API void wlc_surface_get_coordinate_scale(const wlc_resource surface, double out[2]) {
   struct wlc_surface* s = convert_from_wlc_resource(surface, "surface");
   out[0] = s->coordinate_transform.w;
   out[1] = s->coordinate_transform.h;
}
