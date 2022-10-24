// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_get_sp_dists_par
Rcpp::NumericMatrix rcpp_get_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi_in);
RcppExport SEXP _m4ra_rcpp_get_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toi_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par(graph, vert_map_in, fromi, toi_in));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_save_sp_dists_par
bool rcpp_save_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector from_index, Rcpp::CharacterVector from_names_in, Rcpp::IntegerVector toi_in, const std::string path);
RcppExport SEXP _m4ra_rcpp_save_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP from_indexSEXP, SEXP from_names_inSEXP, SEXP toi_inSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type from_index(from_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type from_names_in(from_names_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi_in(toi_inSEXP);
    Rcpp::traits::input_parameter< const std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_save_sp_dists_par(graph, vert_map_in, from_index, from_names_in, toi_in, path));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scan_time_files
void rcpp_scan_time_files(const Rcpp::DataFrame tt, Rcpp::NumericVector& times, const std::string& path);
RcppExport SEXP _m4ra_rcpp_scan_time_files(SEXP ttSEXP, SEXP timesSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type tt(ttSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type times(timesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    rcpp_scan_time_files(tt, times, path);
    return R_NilValue;
END_RCPP
}
// rcpp_net_gtfs_travel_times
Rcpp::IntegerMatrix rcpp_net_gtfs_travel_times(Rcpp::IntegerMatrix t_net_to_gtfs, Rcpp::IntegerMatrix t_gtfs_to_gtfs, Rcpp::IntegerMatrix t_gtfs_to_net, const int n_closest);
RcppExport SEXP _m4ra_rcpp_net_gtfs_travel_times(SEXP t_net_to_gtfsSEXP, SEXP t_gtfs_to_gtfsSEXP, SEXP t_gtfs_to_netSEXP, SEXP n_closestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type t_net_to_gtfs(t_net_to_gtfsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type t_gtfs_to_gtfs(t_gtfs_to_gtfsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type t_gtfs_to_net(t_gtfs_to_netSEXP);
    Rcpp::traits::input_parameter< const int >::type n_closest(n_closestSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_net_gtfs_travel_times(t_net_to_gtfs, t_gtfs_to_gtfs, t_gtfs_to_net, n_closest));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_m4ra_rcpp_get_sp_dists_par", (DL_FUNC) &_m4ra_rcpp_get_sp_dists_par, 4},
    {"_m4ra_rcpp_save_sp_dists_par", (DL_FUNC) &_m4ra_rcpp_save_sp_dists_par, 6},
    {"_m4ra_rcpp_scan_time_files", (DL_FUNC) &_m4ra_rcpp_scan_time_files, 3},
    {"_m4ra_rcpp_net_gtfs_travel_times", (DL_FUNC) &_m4ra_rcpp_net_gtfs_travel_times, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_m4ra(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
