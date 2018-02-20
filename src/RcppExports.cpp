// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// data_ub_adj
arma::mat data_ub_adj(arma::mat I_data, arma::mat data);
RcppExport SEXP _gsynth_data_ub_adj(SEXP I_dataSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type I_data(I_dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(data_ub_adj(I_data, data));
    return rcpp_result_gen;
END_RCPP
}
// XXinv
arma::mat XXinv(arma::cube X);
RcppExport SEXP _gsynth_XXinv(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(XXinv(X));
    return rcpp_result_gen;
END_RCPP
}
// Y_demean
List Y_demean(arma::mat Y, int force);
RcppExport SEXP _gsynth_Y_demean(SEXP YSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(Y_demean(Y, force));
    return rcpp_result_gen;
END_RCPP
}
// fe_add
List fe_add(arma::mat alpha_X, arma::mat xi_X, arma::mat mu_X, arma::mat alpha_Y, arma::mat xi_Y, double mu_Y, arma::mat beta, int T, int N, int p, int force);
RcppExport SEXP _gsynth_fe_add(SEXP alpha_XSEXP, SEXP xi_XSEXP, SEXP mu_XSEXP, SEXP alpha_YSEXP, SEXP xi_YSEXP, SEXP mu_YSEXP, SEXP betaSEXP, SEXP TSEXP, SEXP NSEXP, SEXP pSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type alpha_X(alpha_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_X(xi_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_X(mu_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_Y(alpha_YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_Y(xi_YSEXP);
    Rcpp::traits::input_parameter< double >::type mu_Y(mu_YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_add(alpha_X, xi_X, mu_X, alpha_Y, xi_Y, mu_Y, beta, T, N, p, force));
    return rcpp_result_gen;
END_RCPP
}
// fe_add2
List fe_add2(arma::mat alpha_Y, arma::mat xi_Y, double mu_Y, int T, int N, int force);
RcppExport SEXP _gsynth_fe_add2(SEXP alpha_YSEXP, SEXP xi_YSEXP, SEXP mu_YSEXP, SEXP TSEXP, SEXP NSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type alpha_Y(alpha_YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_Y(xi_YSEXP);
    Rcpp::traits::input_parameter< double >::type mu_Y(mu_YSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_add2(alpha_Y, xi_Y, mu_Y, T, N, force));
    return rcpp_result_gen;
END_RCPP
}
// panel_est
arma::mat panel_est(arma::cube X, arma::mat Y, arma::mat MF);
RcppExport SEXP _gsynth_panel_est(SEXP XSEXP, SEXP YSEXP, SEXP MFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MF(MFSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_est(X, Y, MF));
    return rcpp_result_gen;
END_RCPP
}
// panel_beta
arma::mat panel_beta(arma::cube X, arma::mat xxinv, arma::mat Y, arma::mat FE);
RcppExport SEXP _gsynth_panel_beta(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP FESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE(FESEXP);
    rcpp_result_gen = Rcpp::wrap(panel_beta(X, xxinv, Y, FE));
    return rcpp_result_gen;
END_RCPP
}
// panel_factor
List panel_factor(arma::mat E, int r);
RcppExport SEXP _gsynth_panel_factor(SEXP ESEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_factor(E, r));
    return rcpp_result_gen;
END_RCPP
}
// panel_factor_ub
List panel_factor_ub(arma::mat E, arma::mat I, int r, double tolerate);
RcppExport SEXP _gsynth_panel_factor_ub(SEXP ESEXP, SEXP ISEXP, SEXP rSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_factor_ub(E, I, r, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// panel_FE
arma::mat panel_FE(arma::mat E, double lambda);
RcppExport SEXP _gsynth_panel_FE(SEXP ESEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_FE(E, lambda));
    return rcpp_result_gen;
END_RCPP
}
// panel_FE_ub
List panel_FE_ub(arma::mat E, arma::mat I, double lambda, double tolerate);
RcppExport SEXP _gsynth_panel_FE_ub(SEXP ESEXP, SEXP ISEXP, SEXP lambdaSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_FE_ub(E, I, lambda, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_iter
List fe_ad_iter(arma::mat Y, arma::mat I, int force, double tolerate);
RcppExport SEXP _gsynth_fe_ad_iter(SEXP YSEXP, SEXP ISEXP, SEXP forceSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_iter(Y, I, force, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_covar_iter
List fe_ad_covar_iter(arma::cube XX, arma::mat xxinv, arma::mat alpha_X, arma::mat xi_X, arma::mat mu_X, arma::mat Y, arma::mat I, int force, double tolerate);
RcppExport SEXP _gsynth_fe_ad_covar_iter(SEXP XXSEXP, SEXP xxinvSEXP, SEXP alpha_XSEXP, SEXP xi_XSEXP, SEXP mu_XSEXP, SEXP YSEXP, SEXP ISEXP, SEXP forceSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_X(alpha_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_X(xi_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_X(mu_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_covar_iter(XX, xxinv, alpha_X, xi_X, mu_X, Y, I, force, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_inter_iter
List fe_ad_inter_iter(arma::mat Y, arma::mat I, int force, int mc, int r, double lambda, double tolerate);
RcppExport SEXP _gsynth_fe_ad_inter_iter(SEXP YSEXP, SEXP ISEXP, SEXP forceSEXP, SEXP mcSEXP, SEXP rSEXP, SEXP lambdaSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mc(mcSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_inter_iter(Y, I, force, mc, r, lambda, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_inter_covar_iter
List fe_ad_inter_covar_iter(arma::cube XX, arma::mat xxinv, arma::mat alpha_X, arma::mat xi_X, arma::mat mu_X, arma::mat Y, arma::mat I, int force, int mc, int r, double lambda, double tolerate);
RcppExport SEXP _gsynth_fe_ad_inter_covar_iter(SEXP XXSEXP, SEXP xxinvSEXP, SEXP alpha_XSEXP, SEXP xi_XSEXP, SEXP mu_XSEXP, SEXP YSEXP, SEXP ISEXP, SEXP forceSEXP, SEXP mcSEXP, SEXP rSEXP, SEXP lambdaSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha_X(alpha_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_X(xi_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_X(mu_XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mc(mcSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_inter_covar_iter(XX, xxinv, alpha_X, xi_X, mu_X, Y, I, force, mc, r, lambda, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// beta_iter
List beta_iter(arma::cube X, arma::mat xxinv, arma::mat Y, int r, double tolerate, arma::mat beta0);
RcppExport SEXP _gsynth_beta_iter(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP rSEXP, SEXP tolerateSEXP, SEXP beta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    rcpp_result_gen = Rcpp::wrap(beta_iter(X, xxinv, Y, r, tolerate, beta0));
    return rcpp_result_gen;
END_RCPP
}
// beta_iter_ub
List beta_iter_ub(arma::cube X, arma::mat xxinv, arma::mat Y, arma::mat I, int r, double tolerate, arma::mat beta0);
RcppExport SEXP _gsynth_beta_iter_ub(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP ISEXP, SEXP rSEXP, SEXP tolerateSEXP, SEXP beta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    rcpp_result_gen = Rcpp::wrap(beta_iter_ub(X, xxinv, Y, I, r, tolerate, beta0));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe
List inter_fe(arma::mat Y, arma::cube X, int r, int force, arma::mat beta0, double tol);
RcppExport SEXP _gsynth_inter_fe(SEXP YSEXP, SEXP XSEXP, SEXP rSEXP, SEXP forceSEXP, SEXP beta0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe(Y, X, r, force, beta0, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_ub
List inter_fe_ub(arma::mat Y, arma::cube X, arma::mat I, int r, int force, double tol);
RcppExport SEXP _gsynth_inter_fe_ub(SEXP YSEXP, SEXP XSEXP, SEXP ISEXP, SEXP rSEXP, SEXP forceSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_ub(Y, X, I, r, force, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_mc
List inter_fe_mc(arma::mat Y, arma::cube X, arma::mat I, int r, double lambda, int force, double tol);
RcppExport SEXP _gsynth_inter_fe_mc(SEXP YSEXP, SEXP XSEXP, SEXP ISEXP, SEXP rSEXP, SEXP lambdaSEXP, SEXP forceSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_mc(Y, X, I, r, lambda, force, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gsynth_data_ub_adj", (DL_FUNC) &_gsynth_data_ub_adj, 2},
    {"_gsynth_XXinv", (DL_FUNC) &_gsynth_XXinv, 1},
    {"_gsynth_Y_demean", (DL_FUNC) &_gsynth_Y_demean, 2},
    {"_gsynth_fe_add", (DL_FUNC) &_gsynth_fe_add, 11},
    {"_gsynth_fe_add2", (DL_FUNC) &_gsynth_fe_add2, 6},
    {"_gsynth_panel_est", (DL_FUNC) &_gsynth_panel_est, 3},
    {"_gsynth_panel_beta", (DL_FUNC) &_gsynth_panel_beta, 4},
    {"_gsynth_panel_factor", (DL_FUNC) &_gsynth_panel_factor, 2},
    {"_gsynth_panel_factor_ub", (DL_FUNC) &_gsynth_panel_factor_ub, 4},
    {"_gsynth_panel_FE", (DL_FUNC) &_gsynth_panel_FE, 2},
    {"_gsynth_panel_FE_ub", (DL_FUNC) &_gsynth_panel_FE_ub, 4},
    {"_gsynth_fe_ad_iter", (DL_FUNC) &_gsynth_fe_ad_iter, 4},
    {"_gsynth_fe_ad_covar_iter", (DL_FUNC) &_gsynth_fe_ad_covar_iter, 9},
    {"_gsynth_fe_ad_inter_iter", (DL_FUNC) &_gsynth_fe_ad_inter_iter, 7},
    {"_gsynth_fe_ad_inter_covar_iter", (DL_FUNC) &_gsynth_fe_ad_inter_covar_iter, 12},
    {"_gsynth_beta_iter", (DL_FUNC) &_gsynth_beta_iter, 6},
    {"_gsynth_beta_iter_ub", (DL_FUNC) &_gsynth_beta_iter_ub, 7},
    {"_gsynth_inter_fe", (DL_FUNC) &_gsynth_inter_fe, 6},
    {"_gsynth_inter_fe_ub", (DL_FUNC) &_gsynth_inter_fe_ub, 6},
    {"_gsynth_inter_fe_mc", (DL_FUNC) &_gsynth_inter_fe_mc, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_gsynth(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
