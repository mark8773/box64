#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

GO(cairo_append_path, vFpp)
GO(cairo_arc, vFpddddd)
GO(cairo_arc_negative, vFpddddd)
GO(cairo_clip, vFp)
GO(cairo_clip_extents, vFppppp)
GO(cairo_clip_preserve, vFp)
GO(cairo_close_path, vFp)
GO(cairo_copy_clip_rectangle_list, pFp)
GO(cairo_copy_page, vFp)
GO(cairo_copy_path, pFp)
GO(cairo_copy_path_flat, pFp)
GO(cairo_create, pFp)
GO(cairo_curve_to, vFpdddddd)
GO(cairo_debug_reset_static_data, vFv)
GO(cairo_destroy, vFp)
GO(cairo_device_acquire, uFp)
GO(cairo_device_destroy, vFp)
GO(cairo_device_finish, vFp)
GO(cairo_device_flush, vFp)
GO(cairo_device_get_reference_count, uFp)
GO(cairo_device_get_type, iFp)
GO(cairo_device_get_user_data, pFpp)
GO(cairo_device_observer_elapsed, dFp)
GO(cairo_device_observer_fill_elapsed, dFp)
GO(cairo_device_observer_glyphs_elapsed, dFp)
GO(cairo_device_observer_mask_elapsed, dFp)
GO(cairo_device_observer_paint_elapsed, dFp)
//GOM(cairo_device_observer_print, iFEppp)
GO(cairo_device_observer_stroke_elapsed, dFp)
GO(cairo_device_reference, pFp)
GO(cairo_device_release, vFp)
//GOM(cairo_device_set_user_data, iFEpppp)
GO(cairo_device_status, iFp)
GO(cairo_device_to_user, vFppp)
GO(cairo_device_to_user_distance, vFppp)
GO(cairo_fill, vFp)
GO(cairo_fill_extents, vFppppp)
GO(cairo_fill_preserve, vFp)
GO(cairo_font_extents, vFpp)
GO(cairo_font_face_destroy, vFp)
GO(cairo_font_face_get_reference_count, uFp)
GO(cairo_font_face_get_type, uFp)
GO(cairo_font_face_get_user_data, pFpp)
GO(cairo_font_face_reference, pFp)
//GOM(cairo_font_face_set_user_data, iFpppp)
GO(cairo_font_face_status, uFp)
GO(cairo_font_options_copy, pFp)
GO(cairo_font_options_create, pFv)
GO(cairo_font_options_destroy, vFp)
GO(cairo_font_options_equal, iFpp)
GO(cairo_font_options_get_antialias, uFp)
GO(cairo_font_options_get_hint_metrics, uFp)
GO(cairo_font_options_get_hint_style, uFp)
GO(cairo_font_options_get_subpixel_order, uFp)
GO(cairo_font_options_hash, LFp)
GO(cairo_font_options_merge, vFpp)
GO(cairo_font_options_set_antialias, vFpu)
GO(cairo_font_options_set_hint_metrics, vFpu)
GO(cairo_font_options_set_hint_style, vFpu)
GO(cairo_font_options_set_subpixel_order, vFpu)
GO(cairo_font_options_status, uFp)
GO(cairo_format_stride_for_width, iFii)
GO(cairo_ft_font_face_create_for_ft_face, pFpi)
GO(cairo_ft_font_face_create_for_pattern, pFp)
GO(cairo_ft_font_face_get_synthesize, uFp)
GO(cairo_ft_font_face_set_synthesize, vFpu)
GO(cairo_ft_font_face_unset_synthesize, vFpu)
GO(cairo_ft_font_options_substitute, vFpp)
GO(cairo_ft_scaled_font_lock_face, pFp)
GO(cairo_ft_scaled_font_unlock_face, vFp)
GO(cairo_get_antialias, uFp)
GO(cairo_get_current_point, vFppp)
GO(cairo_get_dash, vFppp)
GO(cairo_get_dash_count, iFp)
GO(cairo_get_fill_rule, uFp)
GO(cairo_get_font_face, pFp)
GO(cairo_get_font_matrix, vFpp)
GO(cairo_get_font_options, vFpp)
GO(cairo_get_group_target, pFp)
GO(cairo_get_line_cap, uFp)
GO(cairo_get_line_join, uFp)
GO(cairo_get_line_width, dFp)
GO(cairo_get_matrix, vFpp)
GO(cairo_get_miter_limit, dFp)
GO(cairo_get_operator, uFp)
GO(cairo_get_reference_count, uFp)
GO(cairo_get_scaled_font, pFp)
GO(cairo_get_source, pFp)
GO(cairo_get_target, pFp)
GO(cairo_get_tolerance, dFp)
GO(cairo_get_user_data, pFpp)
GO(cairo_glyph_allocate, pFi)
GO(cairo_glyph_extents, vFppip)
GO(cairo_glyph_free, vFp)
GO(cairo_glyph_path, vFppi)
GO(cairo_has_current_point, iFp)
GO(cairo_identity_matrix, vFp)
GO(cairo_image_surface_create, pFiii)
GO(cairo_image_surface_create_for_data, pFpiiii)
GO(cairo_image_surface_create_from_png, pFp)
//GO(cairo_image_surface_create_from_png_stream, 
GO(cairo_image_surface_get_data, pFp)
GO(cairo_image_surface_get_format, iFp)
GO(cairo_image_surface_get_height, iFp)
GO(cairo_image_surface_get_stride, iFp)
GO(cairo_image_surface_get_width, iFp)
GO(cairo_in_clip, iFpdd)
GO(cairo_in_fill, iFpdd)
GO(cairo_in_stroke, iFpdd)
GO(cairo_line_to, vFpdd)
GO(cairo_mask, vFpp)
GO(cairo_mask_surface, vFppdd)
GO(cairo_matrix_init, vFpdddddd)
GO(cairo_matrix_init_identity, vFp)
GO(cairo_matrix_init_rotate, vFpd)
GO(cairo_matrix_init_scale, vFpdd)
GO(cairo_matrix_init_translate, vFpdd)
GO(cairo_matrix_invert, uFp)
GO(cairo_matrix_multiply, vFppp)
GO(cairo_matrix_rotate, vFpd)
GO(cairo_matrix_scale, vFpdd)
GO(cairo_matrix_transform_distance, vFppp)
GO(cairo_matrix_transform_point, vFppp)
GO(cairo_matrix_translate, vFpdd)
GO(cairo_mesh_pattern_begin_patch, vFp)
GO(cairo_mesh_pattern_curve_to, vFpdddddd)
GO(cairo_mesh_pattern_end_patch, vFp)
GO(cairo_mesh_pattern_get_control_point, uFpuupp)
GO(cairo_mesh_pattern_get_corner_color_rgba, uFpuupppp)
GO(cairo_mesh_pattern_get_patch_count, uFpp)
GO(cairo_mesh_pattern_get_path, pFpu)
GO(cairo_mesh_pattern_line_to, vFpdd)
GO(cairo_mesh_pattern_move_to, vFpdd)
GO(cairo_mesh_pattern_set_control_point, vFpudd)
GO(cairo_mesh_pattern_set_corner_color_rgb, vFpuddd)
GO(cairo_mesh_pattern_set_corner_color_rgba, vFpudddd)
GO(cairo_move_to, vFpdd)
GO(cairo_new_path, vFp)
GO(cairo_new_sub_path, vFp)
GO(cairo_paint, vFp)
GO(cairo_paint_with_alpha, vFpd)
GO(cairo_path_destroy, vFp)
GO(cairo_path_extents, vFppppp)
GO(cairo_pattern_add_color_stop_rgb, vFpdddd)
GO(cairo_pattern_add_color_stop_rgba, vFpddddd)
GO(cairo_pattern_create_for_surface, pFp)
GO(cairo_pattern_create_linear, pFdddd)
GO(cairo_pattern_create_mesh, pFv)
GO(cairo_pattern_create_radial, pFdddddd)
GO(cairo_pattern_create_raster_source, pFpuii)
GO(cairo_pattern_create_rgb, pFddd)
GO(cairo_pattern_create_rgba, pFdddd)
GO(cairo_pattern_destroy, vFp)
GO(cairo_pattern_get_color_stop_count, uFpp)
GO(cairo_pattern_get_color_stop_rgba, uFpippppp)
GO(cairo_pattern_get_extend, uFp)
GO(cairo_pattern_get_filter, uFp)
GO(cairo_pattern_get_linear_points, uFppppp)
GO(cairo_pattern_get_matrix, vFpp)
GO(cairo_pattern_get_radial_circles, uFppppppp)
GO(cairo_pattern_get_reference_count, uFp)
GO(cairo_pattern_get_rgba, iFppppp)
GO(cairo_pattern_get_surface, uFpp)
GO(cairo_pattern_get_type, uFp)
GO(cairo_pattern_get_user_data, pFpp)
GO(cairo_pattern_reference, pFp)
GO(cairo_pattern_set_extend, vFpu)
GO(cairo_pattern_set_filter, vFpu)
GO(cairo_pattern_set_matrix, vFpp)
//GOM(cairo_pattern_set_user_data, iFEpppp)
GO(cairo_pattern_status, uFp)
GO(cairo_pdf_get_versions, vFpp)
GO(cairo_pdf_surface_create, pFpdd)
//GO(cairo_pdf_surface_create_for_stream, 
GO(cairo_pdf_surface_restrict_to_version, vFpu)
GO(cairo_pdf_surface_set_size, vFpdd)
GO(cairo_pdf_version_to_string, pFu)
GO(cairo_pop_group, pFp)
GO(cairo_pop_group_to_source, vFp)
GO(cairo_ps_get_levels, vFpp)
GO(cairo_ps_level_to_string, pFu)
GO(cairo_ps_surface_create, pFpdd)
//GO(cairo_ps_surface_create_for_stream, 
GO(cairo_ps_surface_dsc_begin_page_setup, vFp)
//GO(cairo_ps_surface_dsc_begin_setup, 
GO(cairo_ps_surface_dsc_comment, vFpp)
GO(cairo_ps_surface_get_eps, iFp)
GO(cairo_ps_surface_restrict_to_level, vFpu)
GO(cairo_ps_surface_set_eps, vFpi)
GO(cairo_ps_surface_set_size, vFpdd)
GO(cairo_push_group, vFp)
GO(cairo_push_group_with_content, vFpu)
GO(cairo_raster_source_pattern_get_acquire, vFppp)
GO(cairo_raster_source_pattern_get_callback_data, pFp)
GO(cairo_raster_source_pattern_get_copy, pFp)
GO(cairo_raster_source_pattern_get_finish, pFp)
GO(cairo_raster_source_pattern_get_snapshot, pFp)
//GO(cairo_raster_source_pattern_set_acquire, 
GO(cairo_raster_source_pattern_set_callback_data, vFpp)
//GO(cairo_raster_source_pattern_set_copy, 
//GO(cairo_raster_source_pattern_set_finish, 
//GO(cairo_raster_source_pattern_set_snapshot, 
GO(cairo_recording_surface_create, pFup)
GO(cairo_recording_surface_get_extents, iFpp)
GO(cairo_recording_surface_ink_extents, vFppppp)
GO(cairo_rectangle, vFpdddd)
GO(cairo_rectangle_list_destroy, vFp)
GO(cairo_reference, pFp)
GO(cairo_region_contains_point, iFpii)
GO(cairo_region_contains_rectangle, uFpp)
GO(cairo_region_copy, pFp)
GO(cairo_region_create, pFv)
GO(cairo_region_create_rectangle, pFp)
GO(cairo_region_create_rectangles, pFpi)
GO(cairo_region_destroy, vFp)
GO(cairo_region_equal, iFpp)
GO(cairo_region_get_extents, vFpp)
GO(cairo_region_get_rectangle, vFpip)
GO(cairo_region_intersect, iFpp)
GO(cairo_region_intersect_rectangle, iFpp)
GO(cairo_region_is_empty, iFp)
GO(cairo_region_num_rectangles, iFp)
GO(cairo_region_reference, pFp)
GO(cairo_region_status, uFp)
GO(cairo_region_subtract, iFpp)
GO(cairo_region_subtract_rectangle, iFpp)
GO(cairo_region_translate, vFpii)
GO(cairo_region_union, iFpp)
GO(cairo_region_union_rectangle, iFpp)
GO(cairo_region_xor, uFpp)
GO(cairo_region_xor_rectangle, uFpp)
GO(cairo_rel_curve_to, vFpdddddd)
GO(cairo_rel_line_to, vFpdd)
GO(cairo_rel_move_to, vFpdd)
GO(cairo_reset_clip, vFp)
GO(cairo_restore, vFp)
GO(cairo_rotate, vFpd)
GO(cairo_save, vFp)
GO(cairo_scale, vFpdd)
GO(cairo_scaled_font_create, pFpppp)
GO(cairo_scaled_font_destroy, vFp)
GO(cairo_scaled_font_extents, vFpp)
GO(cairo_scaled_font_get_ctm, vFpp)
GO(cairo_scaled_font_get_font_face, pFp)
GO(cairo_scaled_font_get_font_matrix, vFpp)
GO(cairo_scaled_font_get_font_options, vFpp)
GO(cairo_scaled_font_get_reference_count, uFp)
GO(cairo_scaled_font_get_scale_matrix, vFpp)
GO(cairo_scaled_font_get_type, uFp)
GO(cairo_scaled_font_get_user_data, pFpp)
GO(cairo_scaled_font_glyph_extents, vFppip)
GO(cairo_scaled_font_reference, pFp)
//GOM(cairo_scaled_font_set_user_data, iFEpppp)
GO(cairo_scaled_font_status, uFp)
GO(cairo_scaled_font_text_extents, vFppp)
GO(cairo_scaled_font_text_to_glyphs, uFpddpippppp)
GO(cairo_script_create, pFp)
//GO(cairo_script_create_for_stream, 
GO(cairo_script_from_recording_surface, uFpp)
GO(cairo_script_get_mode, uFp)
GO(cairo_script_set_mode, vFpu)
GO(cairo_script_surface_create, pFpudd)
GO(cairo_script_surface_create_for_target, pFpp)
GO(cairo_script_write_comment, vFppi)
GO(cairo_select_font_face, vFppuu)
GO(cairo_set_antialias, vFpu)
GO(cairo_set_dash, vFppid)
GO(cairo_set_fill_rule, vFpu)
GO(cairo_set_font_face, vFpp)
GO(cairo_set_font_matrix, vFpp)
GO(cairo_set_font_options, vFpp)
GO(cairo_set_font_size, vFpd)
GO(cairo_set_line_cap, vFpu)
GO(cairo_set_line_join, vFpu)
GO(cairo_set_line_width, vFpd)
GO(cairo_set_matrix, vFpp)
GO(cairo_set_miter_limit, vFpd)
GO(cairo_set_operator, vFpu)
GO(cairo_set_scaled_font, vFpp)
GO(cairo_set_source, vFpp)
GO(cairo_set_source_rgb, vFpddd)
GO(cairo_set_source_rgba, vFpdddd)
GO(cairo_set_source_surface, vFppdd)
GO(cairo_set_tolerance, vFpd)
//GOM(cairo_set_user_data, iFEpppp)
GO(cairo_show_glyphs, vFppi)
GO(cairo_show_page, vFp)
GO(cairo_show_text, vFpp)
GO(cairo_show_text_glyphs, vFppipipiu)
GO(cairo_status, uFp)
GO(cairo_status_to_string, pFu)
GO(cairo_stroke, vFp)
GO(cairo_stroke_extents, vFppppp)
GO(cairo_stroke_preserve, vFp)
GO(cairo_surface_copy_page, vFp)
GO(cairo_surface_create_for_rectangle, pFpdddd)
GO(cairo_surface_create_observer, pFpu)
GO(cairo_surface_create_similar, pFpuii)
GO(cairo_surface_create_similar_image, pFpiii)
GO(cairo_surface_destroy, vFp)
GO(cairo_surface_finish, vFp)
GO(cairo_surface_flush, vFp)
GO(cairo_surface_get_content, uFp)
GO(cairo_surface_get_device, pFp)
GO(cairo_surface_get_device_offset, vFppp)
GO(cairo_surface_get_device_scale, vFpp)
GO(cairo_surface_get_fallback_resolution, vFppp)
GO(cairo_surface_get_font_options, vFpp)
GO(cairo_surface_get_mime_data, vFpppp)
GO(cairo_surface_get_reference_count, uFp)
GO(cairo_surface_get_type, uFp)
GO(cairo_surface_get_user_data, pFpp)
GO(cairo_surface_has_show_text_glyphs, iFp)
GO(cairo_surface_map_to_image, pFpp)
GO(cairo_surface_mark_dirty, vFp)
GO(cairo_surface_mark_dirty_rectangle, vFpiiii)
//GO(cairo_surface_observer_add_fill_callback, 
//GO(cairo_surface_observer_add_finish_callback, 
//GO(cairo_surface_observer_add_flush_callback, 
//GO(cairo_surface_observer_add_glyphs_callback, 
//GO(cairo_surface_observer_add_mask_callback, 
//GO(cairo_surface_observer_add_paint_callback, 
//GO(cairo_surface_observer_add_stroke_callback, 
GO(cairo_surface_observer_elapsed, dFp)
//GO(cairo_surface_observer_print, 
GO(cairo_surface_reference, pFp)
GO(cairo_surface_set_device_offset, vFpdd)
GO(cairo_surface_set_device_scale, vFpdd)
GO(cairo_surface_set_fallback_resolution, vFpdd)
//GOM(cairo_surface_set_mime_data, iFEpppLpp)
//GOM(cairo_surface_set_user_data, iFEpppp)
GO(cairo_surface_show_page, vFp)
GO(cairo_surface_status, uFp)
GO(cairo_surface_supports_mime_type, iFpp)
GO(cairo_surface_unmap_image, vFpp)
GO(cairo_surface_write_to_png, uFpp)
//GO(cairo_surface_write_to_png_stream, 
GO(cairo_svg_get_versions, vFpp)
GO(cairo_svg_surface_create, pFpdd)
//GO(cairo_svg_surface_create_for_stream, 
GO(cairo_svg_surface_restrict_to_version, vFpu)
GO(cairo_svg_version_to_string, pFu)
GO(cairo_text_cluster_allocate, pFi)
GO(cairo_text_cluster_free, vFp)
GO(cairo_text_extents, vFppp)
GO(cairo_text_path, vFpp)
GO(cairo_toy_font_face_create, pFpuu)
GO(cairo_toy_font_face_get_family, pFp)
GO(cairo_toy_font_face_get_slant, uFp)
GO(cairo_toy_font_face_get_weight, uFp)
GO(cairo_transform, vFpp)
GO(cairo_translate, vFpdd)
GO(cairo_user_font_face_create, pFv)
GO(cairo_user_font_face_get_init_func, pFp)
GO(cairo_user_font_face_get_render_glyph_func, pFp)
GO(cairo_user_font_face_get_text_to_glyphs_func, pFp)
GO(cairo_user_font_face_get_unicode_to_glyph_func, pFp)
//GO(cairo_user_font_face_set_init_func, 
//GO(cairo_user_font_face_set_render_glyph_func, 
//GO(cairo_user_font_face_set_text_to_glyphs_func, 
//GO(cairo_user_font_face_set_unicode_to_glyph_func, 
GO(cairo_user_to_device, vFppp)
GO(cairo_user_to_device_distance, vFppp)
GO(cairo_version, iFv)
GO(cairo_version_string, pFv)
GO(cairo_xcb_device_debug_cap_xrender_version, vFpii)
//GO(cairo_xcb_device_debug_cap_xshm_version, 
GO(cairo_xcb_device_debug_get_precision, iFp)
GO(cairo_xcb_device_debug_set_precision, vFpi)
GOM(cairo_xcb_device_get_connection, pFEp)
GO(cairo_xcb_surface_create, pFbupii)
GO(cairo_xcb_surface_create_for_bitmap, pFbpuii)
GO(cairo_xcb_surface_create_with_xrender_format, pFbpupii)
GO(cairo_xcb_surface_set_drawable, vFpuii)
GO(cairo_xcb_surface_set_size, vFpii)
GO(cairo_xlib_device_debug_cap_xrender_version, vFpii)
GO(cairo_xlib_device_debug_get_precision, iFp)
GO(cairo_xlib_device_debug_set_precision, vFpi)
//GO(cairo_xlib_surface_create, 
GO(cairo_xlib_surface_create_for_bitmap, pFpLpii)
GO(cairo_xlib_surface_create_with_xrender_format, pFpLppii)
//GO(cairo_xlib_surface_get_depth, 
GO(cairo_xlib_surface_get_display, pFp)
GO(cairo_xlib_surface_get_drawable, LFp)
GO(cairo_xlib_surface_get_height, iFp)
GO(cairo_xlib_surface_get_screen, pFp)
//GO(cairo_xlib_surface_get_visual, 
//GO(cairo_xlib_surface_get_width, 
GO(cairo_xlib_surface_get_xrender_format, pFp)
GO(cairo_xlib_surface_set_drawable, vFpLii)
GO(cairo_xlib_surface_set_size, vFpii)
//GO(cairo_xml_create, 
//GO(cairo_xml_create_for_stream, 
//GO(cairo_xml_for_recording_surface, 
//GO(cairo_xml_surface_create, 
